#pragma once
#include <string>
#include <Windows.h>
#include"externals/DirectXTex/DirectXTex.h"

class TextureConverter
{
public:
	TextureConverter();
	~TextureConverter();

	/// <summary>
	/// テクスチャをWICからDDSに変換する
	/// </summary>
	/// <param name="filePath">ファイルパス</param>
	void ConnvertTextureWICToDDS(const std::string& filePath);

private:

	/// <summary>
	/// テクスチャファイルの読み込み
	/// </summary>
	/// <param name="filepath">ファイルパス</param>
	void LoadWICTextureFromFile(const std::string& filepath);



	/// <summary>
	///	マルチバイト文字をワイド文字に変換する
	/// </summary>
	/// <param name="mString">マルチバイト文字列</param>
	/// <returns></returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

	/// <summary>
	/// フォルダパスとファイル名を分離する
	/// </summary>
	/// <param name="filePath">ファイルパス</param>
	void SeparateFilePath(const std::wstring& filePath);

	/// <summary>
	/// DDSテクスチャとしてファイル書き出し
	/// </summary>
	void SaveDDSTextureToFile();

private:
	//画像の情報
	DirectX::TexMetadata metadata_;
	//画像イメージのコンテナ
	DirectX::ScratchImage scratchImage_;

	//ディレクトリパス
	std::wstring directryPath_;
	//ファイル名
	std::wstring fileName_;
	//ファイル拡張子
	std::wstring fileExt_;
};
