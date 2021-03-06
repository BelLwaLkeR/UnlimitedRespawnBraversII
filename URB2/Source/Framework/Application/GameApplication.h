#pragma once

#include <Source/Framework/Application/DxLibApplication.h>
#include <Source/Framework/Device/Input/InputManager.h>
#include <Source/Framework/Scene/SceneManager.h>

/**
* @class		GameApplication
* @inheritance	DxLibApplication
* @namespace	framework
* @brief		�Q�[�����[�v�̍Œ���̎����p�N���X�B
* @author		��X ���i
*/


namespace framework {
	class GameApplication: public DxLibApplication {
	public:
		GameApplication();
		~GameApplication();
		void run();

	private:
		InputManager input;
		SceneManager sceneManager;

		void initialize()	override;
		void update()		override;
		void draw()			override;
		void finalize()		override;
		bool isEnd()		override;
		void setupWindowConfig() override;
	};
}