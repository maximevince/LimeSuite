#ifndef __lms7002_pnlTBB_view__
#define __lms7002_pnlTBB_view__

/**
@file
Subclass of pnlTBB_view, which is generated by wxFormBuilder.
*/

#include "lms7002_wxgui.h"

//// end generated include
#include <map>
#include "LMS7002M_parameters.h"
namespace lime{
class LMS7002M;
}
/** Implementing pnlTBB_view */
class lms7002_pnlTBB_view : public pnlTBB_view
{
	protected:
		// Handlers for pnlTBB_view events.
		void ParameterChangeHandler( wxCommandEvent& event );
        void ParameterChangeHandler(wxSpinEvent& event);
		virtual void OnbtnTuneFilter( wxCommandEvent& event );
        void OnTxFilterTypeChange(wxCommandEvent& event);
	public:
		/** Constructor */
		lms7002_pnlTBB_view( wxWindow* parent );
	//// end generated class members
	lms7002_pnlTBB_view(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL);
    void Initialize(lime::LMS7002M* pControl);
    void UpdateGUI();
protected:
    lime::LMS7002M* lmsControl;
	std::map<wxWindow*, lime::LMS7Parameter> wndId2Enum;
};

#endif // __lms7002_pnlTBB_view__
