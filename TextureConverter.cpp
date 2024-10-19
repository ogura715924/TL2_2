#include "TextureConverter.h"

TextureConverter::TextureConverter()
{
}

TextureConverter::~TextureConverter()
{
}

void TextureConverter::ConnvertTextureWICToDDS(const std::string& filePath)
{
	//1.テクスチャファイルを読み込む

	//2.DDS形式に変換して書き出す

}

void TextureConverter::LoadWICTextureFromFile(const std::string& filepath)
{
	//1.ファイルパスワイド文字に変換

	//2.テクスチャを読み込む
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	return std::wstring();
}
