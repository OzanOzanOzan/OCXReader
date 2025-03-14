/***************************************************************************
 *   Created on: 02 Dec 2022                                               *
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

#ifndef OCX_INCLUDE_OCX_INTERNAL_OCX_CUT_BY_H_
#define OCX_INCLUDE_OCX_INTERNAL_OCX_CUT_BY_H_

#include <LDOM_Element.hxx>
#include <TopoDS_Shape.hxx>

namespace ocx::vessel::panel::cut_by {

[[nodiscard]] TopoDS_Shape ReadCutBy(LDOM_Element const &panelN,
                                     TopoDS_Shape &panelShape);

namespace {  // anonymous namespace

[[nodiscard]] TopoDS_Wire ReadCutGeometry(LDOM_Element const &stiffenerN);

}  // namespace

}  // namespace ocx::vessel::panel::cut_by

#endif  // OCX_INCLUDE_OCX_INTERNAL_OCX_CUT_BY_H_
