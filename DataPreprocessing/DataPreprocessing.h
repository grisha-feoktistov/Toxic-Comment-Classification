#pragma once

#include "../includes/json.hpp"


using json = nlohmann::json;

/**
namespace tcc
@brief ������������ ���� tcc
*/
namespace tcc {
	/**
	@brief ��������� ��� ������� ������������� ������
	*/
	class DataPreprocessing {
		/**
		@brief ����������� ������� ��� ������������� ������
		@param msg ��������� ������, ���������� � ���� ����� ���������� �������������
		*/
		virtual void run(const json& msg) const = 0;
	};
}