//
//  Selector.cpp
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/7.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#include "Selector.hpp"

namespace future {
    Selector::Selector()
    {
        m_ruleData = 0;
    }
    
    Selector::~Selector()
    {
        m_ruleData = NULL;
    }
    
    std::string Selector::description()
    {
        switch (m_selectorType) {
            case TypeSelector:
                return "TypeSelector";
            case IDSelector:
                return "IDSelector";
            case ClassSelector:
                return "ClassSelector";
            case UniversalSelector:
                return "UniversalSelector";
            case AttributeSelector:
                return "AttributeSelector";
            case PseudoSelector:
                return "PseudoSelector";
            case SimpleSelectorSequence:
                return "SimpleSelectorSequence";
            case CombineSelector:
                return "CombineSelector";
            case SelectorGroup:
                return "SelectorGroup";
            case SignSelector:
                return "SignSelector";
                
            default:
                return "UnknownSelector";
        }
    }
}
