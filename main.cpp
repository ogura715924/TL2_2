#include<cstdio>
#include<cstdlib>
#include<cassert>
#include"TextureConverter.h"
#include"Windows.h"

//コマンドライン引数
enum Argument {
	kApplicationPath,//アプリケーションパス
	kFilePath,		 //渡されたファイルのパス

	NumArgument,
};

int main(int argc, char* argv[])
{
	assert(argc >= NumArgument);

	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	TextureConverter textureConverter;
	textureConverter.ConnvertTextureWICToDDS(argv[kFilePath]);

	system("pause");
	return 0;
}