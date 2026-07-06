# Bullet3 Binaries

This is a part of [Node3D](https://github.com/node-3d) project.

[![NPM](https://badge.fury.io/js/%40node-3d%2Fdeps-bullet.svg)](https://badge.fury.io/js/@node-3d/deps-bullet)
[![Lint](https://github.com/node-3d/deps-bullet/actions/workflows/lint.yml/badge.svg)](https://github.com/node-3d/deps-bullet/actions/workflows/lint.yml)
[![Test](https://github.com/node-3d/deps-bullet/actions/workflows/test.yml/badge.svg)](https://github.com/node-3d/deps-bullet/actions/workflows/test.yml)

```console
npm install @node-3d/deps-bullet
```

This dependency package distributes **Bullet Physics**
binaries through **npm** for **Node.js** addons.

* Platforms: Windows x64, Linux x64, Linux ARM64, macOS ARM64.
* Library: Bullet physics, see list below.
* Linking: static lib-type (PIC/MD).

See the official
[Bullet3 manual](https://github.com/bulletphysics/bullet3/blob/master/docs/Bullet_User_Manual.pdf)
and [examples](https://github.com/bulletphysics/bullet3/tree/master/examples).

See [@node-3d/bullet](https://github.com/node-3d/bullet/tree/master/src/cpp) for
how the libraries may be used in a Node.js addon.


## Included Libs

Python and Robotics libs are **NOT** included, only C++/CL simulation related stuff (`.lib`/`.a`):

* LinearMath
* Bullet2FileLoader
* Bullet3Collision
* Bullet3Common
* Bullet3Dynamics
* Bullet3Geometry
* Bullet3OpenCL_clew
* BulletCollision
* BulletDynamics
* BulletInverseDynamics
* BulletSoftBody


## Legal Notice

This software uses [Bullet3](http://bulletphysics.org/wordpress/).
Bullet3 is legally used under the ZLIB license.
It is explicitly stated that Bullet3 can be used commercially in closed-source projects.
A copy of the Bullet3 license is [included](BULLET_ZLIB),
and can also be found at the
[official repository](https://github.com/bulletphysics/bullet3/blob/master/LICENSE.txt).

No changes to the original content of any Bullet source file were made. No claims are made that
any physics algorithms are changed/invented within this repository.
