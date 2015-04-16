//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2006-2015 SuperTuxKart-Team
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_COMBINDED_CHARACTERISTICS_HPP
#define HEADER_COMBINDED_CHARACTERISTICS_HPP

#include "karts/abstract_characteristics.hpp"

class CombinedCharacteristics : public AbstractCharacteristics
{
private:
    std::vector<const AbstractCharacteristics*> m_childs;

public:
    void addCharacteristic(const AbstractCharacteristics *characteristic);

    virtual const SkiddingProperties* getSkiddingProperties() const;
    virtual void process(CharacteristicType type, Value value, bool &isSet) const;
};

#endif

