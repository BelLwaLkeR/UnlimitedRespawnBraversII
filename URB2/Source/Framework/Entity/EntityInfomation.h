#pragma once

#include <string>
#include <Source/Utility/Type/Vector2.h>
#include <Source/Utility/Type/Hash.h>

/**
* @class		EntityInfomation
* @namespace	framework
* @brief		Entityの情報をまとめたクラス
* @author		大森 健司
*/

namespace framework {
	struct EntityInfomation {
		std::string		name;
		util::Hash		tag;
		unsigned int	id;

		util::SharedPtr<util::Vector2>	pPosition;

		EntityInfomation() {
			name		= "GameObject";
			tag			= util::Hash();
			id			= 0;
			pPosition	= util::makeShared<util::Vector2>();
		}
		EntityInfomation(const std::string& name, const util::Hash& tag, unsigned int id, const util::Vector2& position) {
			this->name		= name;
			this->tag		= tag;
			this->id		= id;
			this->pPosition	= util::makeShared<util::Vector2>(position);
		}
	};

}