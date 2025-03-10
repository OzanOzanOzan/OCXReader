/***************************************************************************
 *   Created on: 11 Dec 2022                                               *
 ***************************************************************************
 *   Copyright (c) 2022, Carsten Zerbst (carsten.zerbst@groy-groy.de)      *
 *   Copyright (c) 2022, Paul Buechner                                     *
 *                                                                         *
 *   This file is part of the OCXReader library.                           *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public License    *
 *   version 2.1 as published by the Free Software Foundation.             *
 *                                                                         *
 ***************************************************************************/

#include "shipxml/internal/shipxml-coordinate-system-reader.h"

#include <LDOM_Element.hxx>
#include <memory>
#include <utility>

#include "shipxml/internal/shipxml-ship-steel-transfer.h"

namespace shipxml {

CoordinateSystemReader::CoordinateSystemReader(
    const LDOM_Element& vesselN, std::shared_ptr<ShipSteelTransfer> sst)
    : m_sst(std::move(sst)), m_ocxVesselEL(vesselN) {}

//-----------------------------------------------------------------------------

void CoordinateSystemReader::ReadCoordinateSystem() const {}

}  // namespace shipxml
