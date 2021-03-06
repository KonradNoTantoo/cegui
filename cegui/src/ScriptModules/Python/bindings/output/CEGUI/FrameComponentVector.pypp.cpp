// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "generators/include/python_CEGUI.h"
#include "FrameComponentVector.pypp.hpp"

namespace bp = boost::python;

void register_FrameComponentVector_class(){

    bp::class_< std::vector< CEGUI::FrameComponent* > >("FrameComponentVector")    
        .def( bp::indexing::vector_suite< std::vector< CEGUI::FrameComponent* > >::with_policies(bp::return_internal_reference< >()) );

}
