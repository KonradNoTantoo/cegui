/************************************************************************
    filename:   FalCheckbox.h
    created:    Thu Jun 23 2005
    author:     Paul D Turner <paul@cegui.org.uk>
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://www.cegui.org.uk)
    Copyright (C)2004 - 2005 Paul D Turner (paul@cegui.org.uk)
 
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.
 
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
 
    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _FalCheckbox_h_
#define _FalCheckbox_h_

#include "FalModule.h"
#include "elements/CEGUICheckbox.h"

// Start of CEGUI namespace section
namespace CEGUI
{
    /*!
    \brief
        Checkbox class for the FalagardBase module.

        This class requires LookNFeel to be assigned.  The LookNFeel should provide the following:

        States (missing states will default to 'Normal' or 'SelectedNormal' if selected)
            - Normal            - Rendering for when the checkbox is neither pushed or has the mouse hovering over it.
            - Hover             - Rendering for then the checkbox has the mouse hovering over it.
            - Pushed            - Rendering for when the checkbox is not selected, is pushed and has the mouse over it.
            - PushedOff         - Rendering for when the checkbox is not selected, is pushed and the mouse is not over it.
            - Disabled          - Rendering for when the checkbox is not selected and is disabled.
            - SelectedNormal    - Rendering for when the checkbox is selected and is neither pushed or has the mouse hovering over it.
            - SelectedHover     - Rendering for then the checkbox is selected and has the mouse hovering over it.
            - SelectedPushed    - Rendering for when the checkbox is selected, is pushed and has the mouse over it.
            - SelectedPushedOff - Rendering for when the checkbox is selected, is pushed and the mouse is not over it.
            - SelectedDisabled  - Rendering for when the checkbox is selected and is disabled.
    */
    class FALAGARDBASE_API FalagardCheckbox : public Checkbox
    {
    public:
        static const utf8   WidgetTypeName[];       //!< type name for this widget.

        /*!
        \brief
            Constructor
        */
        FalagardCheckbox(const String& type, const String& name);

        /*!
        \brief
            Destructor
        */
        ~FalagardCheckbox();

    protected:
        // overridden from Checkbox base class.
        void populateRenderCache();
    };

} // End of  CEGUI namespace section


#endif  // end of guard _FalCheckbox_h_
