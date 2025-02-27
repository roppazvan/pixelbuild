#pragma once

#include "GamePreview.hpp"

class GamePanel : public wxPanel
{
public:
	GamePanel(wxWindow* Parent,
        wxWindowID ID,
        wxPoint Position,
        wxSize Size,
        long       Style = 0) :
        wxPanel(Parent, ID, Position, Size, Style)
	{
        m_gp = new GamePreview(this, wxID_ANY, Position, Size);
	}

	void SetTileToPaint(int tile);
	void OpenNewFile(wxString path);
	char* GetLevel();

private:
	GamePreview* m_gp;
};
