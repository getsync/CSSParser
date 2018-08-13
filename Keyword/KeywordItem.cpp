//
//  KeywordItem.cpp
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/8.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#include "KeywordItem.hpp"

namespace future {
    KeywordItem::KeywordItem(const std::string& name)
    {
        m_name = name;
        m_data = NULL;
    }
    
    KeywordItem::~KeywordItem()
    {
        delete [] m_data;
        m_data = NULL;
    }
}
