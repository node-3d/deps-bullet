import fs from 'node:fs/promises';
import path from 'node:path';

const {
	getBin, ensuredir,
} = await import('@node-3d/addon-tools');


const bin = getBin();
const binPath = path.resolve(bin);


const fail = (error) => {
	console.error(error);
	process.exit(-1);
};


try {
	await ensuredir(binPath);
	
	await fs.cp(path.resolve('src/build'), binPath, { recursive: true });
} catch (error) {
	fail(error);
}
