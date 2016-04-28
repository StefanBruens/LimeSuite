#ifndef __lms7002_pnlSX_view__
#define __lms7002_pnlSX_view__

/**
@file
Subclass of pnlSX_view, which is generated by wxFormBuilder.
*/

#include "lms7002_wxgui.h"

//// end generated include
#include <map>
#include "LimeSuite.h"
namespace lime{

}
/** Implementing pnlSX_view */
class lms7002_pnlSX_view : public pnlSX_view
{
	protected:
		// Handlers for pnlSX_view events.
		void ParameterChangeHandler( wxCommandEvent& event );
        void ParameterChangeHandler( wxSpinEvent& event);
        void OnbtnReadComparators(wxCommandEvent& event);
		void OnbtnChangeRefClkClick( wxCommandEvent& event );
		void OnDIV2PrescalerChange( wxCommandEvent& event );
		void OnbtnCalculateClick( wxCommandEvent& event );
		void OnbtnTuneClick( wxCommandEvent& event );
        void OnShowVCOclicked(wxCommandEvent& event);
	public:
		/** Constructor */
		lms7002_pnlSX_view( wxWindow* parent );
	//// end generated class members
    lms7002_pnlSX_view(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL);
    void Initialize(lms_device_t* pControl);
    void UpdateGUI();
protected:
    lms_device_t* lmsControl;
	std::map<wxWindow*, LMS7Parameter> wndId2Enum;
};

#endif // __lms7002_pnlSX_view__
