// dllmain.h : Declaration of module class.

class Catl_web_serviceModule : public ATL::CAtlDllModuleT< Catl_web_serviceModule >
{
public :
	DECLARE_LIBID(LIBID_atl_web_serviceLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATL_WEB_SERVICE, "{FAB8F186-0A09-4BAF-AF46-0D49354DC954}")
};

extern class Catl_web_serviceModule _AtlModule;
