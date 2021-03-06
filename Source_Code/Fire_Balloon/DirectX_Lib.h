 #include <tchar.h>
#include <d3d9.h>
#include <d3dx9.h>
#pragma warning( disable : 4996 ) // disable deprecated warning 
#include <strsafe.h>
#pragma warning( default : 4996 ) 
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")
#define BACKGROUND_TEXTURE_PATH "..\\Resource\\main_screen_background.jpg"

class DirectX_Lib
{
private:
	LPDIRECT3D9             g_pD3D;//       = NULL; // Used to create the D3DDevice
	LPDIRECT3DDEVICE9       g_pd3dDevice;// = NULL; // Our rendering device
	LPD3DXSPRITE g_pSprite;
	WNDCLASSEX g_wc;
	HWND g_hWnd;

	LPDIRECT3DTEXTURE9 backGroundTexture;// = NULL;
	
	void InitWin(void);
	void InitWin(LPCWSTR windowName, int posX, int posY, int width, int height);
	void InitDX(void);
	void LoadBackGroundData(void);

public:
	DirectX_Lib();
	DirectX_Lib(LPCWSTR windowName, int posX, int posY, int width, int height);
	~DirectX_Lib();
	static LRESULT WINAPI MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam );
	HRESULT InitD3D( HWND hWnd );
	void Initilize(void);
	VOID Cleanup();
	VOID Render();
	WNDCLASSEX GetValueGWC();
};