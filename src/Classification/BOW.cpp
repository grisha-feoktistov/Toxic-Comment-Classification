#include<functional>
#include "Classification/BOW.h"

namespace tcc {
	void BOW::add_word(std::string& w, json tags)
	{
		std::hash<std::string> hash_fn;


		auto node = _root->_find(hash_fn(w));
		if (node)
		{
			node->w._update_freq(tags);
		}
		else
		{
			node = new BSTNode(Word(hash_fn(w), 0));
			node->w._update_freq(tags);
			_root = _root->_insert(node);
		}
	}

	tcc::Word BOW::find_word(std::string& s)
	{
		std::hash<std::string> hash_fn;
		auto res = _root->_find(hash_fn(s));

		if (res)
			return res->w;

		return  Word(0, 0);
	}
}