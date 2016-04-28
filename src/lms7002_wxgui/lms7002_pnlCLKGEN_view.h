#ifndef __lms7002_pnlCLKGEN_view__
#define __lms7002_pnlCLKGEN_view__

/**
@file
Subclass of pnlCLKGEN_view, which is generated by wxFormBuilder.
*/

#include "lms7002_wxgui.h"

//// end generated include
#include <map>
#include "LimeSuite.h"
namespace lime{
}
/** Implementing pnlCLKGEN_view */
class lms7002_pnlCLKGEN_view : public pnlCLKGEN_view
{
	protected:
		// Handlers for pnlCLKGEN_view events.
		void ParameterChangeHandler( wxCommandEvent& event );
        void ParameterChangeHandler(wxSpinEvent& event);
		void onbtnTuneClick( wxCommandEvent& event );
        void OnbtnReadComparators(wxCommandEvent& event);
        void OnbtnUpdateCoarse(wxCommandEvent& event);
        void OnShowVCOclicked(wxCommandEvent& event);
	public:
        void onbtnCalculateClick(wxCommandEvent& event);
		/** Constructor */
		lms7002_pnlCLKGEN_view( wxWindow* parent );
	//// end generated class members
	lms7002_pnlCLKGEN_view(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL);
    void Initialize(lms_device_t* pControl);
    void UpdateGUI();
    void UpdateInterfaceFrequencies();
protected:
    void UpdateCLKL();
    lms_device_t* lmsControl;
	std::map<wxWindow*, LMS7Parameter> wndId2Enum;
};

#endif // __lms7002_pnlCLKGEN_view__
