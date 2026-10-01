#include <node_api.h>
#include <btBulletDynamicsCommon.h>

napi_value probe(napi_env env, napi_callback_info) {
	btDefaultCollisionConfiguration configuration{};
	btCollisionDispatcher dispatcher(&configuration);
	btDbvtBroadphase broadphase{};
	btSequentialImpulseConstraintSolver solver{};
	btDiscreteDynamicsWorld world(&dispatcher, &broadphase, &solver, &configuration);
	world.setGravity(btVector3(0, btScalar(-9.8), 0));

	napi_value result;
	napi_get_boolean(env, world.getGravity().getY() < 0, &result);
	return result;
}

napi_value init(napi_env env, napi_value exports) {
	napi_value function;
	napi_create_function(env, "probe", NAPI_AUTO_LENGTH, probe, nullptr, &function);
	napi_set_named_property(env, exports, "probe", function);
	return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, init)
