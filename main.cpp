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

	//COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバーター
	TextureConverter textureConverter;//(資料だとconvert)
	textureConverter.ConnvertTextureWICToDDS(argv[kFilePath]);

	//COMライブラリの終了
	CoUninitialize();

	system("pause");
	return 0;
}