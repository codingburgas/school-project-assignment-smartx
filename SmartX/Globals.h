#pragma once
namespace SmartX {
	ref class MainForm;
}

ref class Globals
{
public:
	static int ModulesCompleted = 0;
	static SmartX::MainForm^ mainForm;
};
