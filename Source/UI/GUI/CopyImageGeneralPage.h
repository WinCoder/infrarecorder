/*
 * Copyright (C) 2006-2007 Christian Kindahl, christian dot kindahl at gmail dot com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#pragma once
#include "resource.h"
#include "Core2.h"

class CCopyImageGeneralPage : public CPropertyPageImpl<CCopyImageGeneralPage>
{
private:
	unsigned int m_uiParentTitleLen;
	HICON m_hRefreshIcon;
	HIMAGELIST m_hRefreshImageList;

	CComboBox m_SourceCombo;
	CCore2Device m_CurDevice;

	// File name of the target image file.
	TCHAR m_szFileName[MAX_PATH];

	enum
	{
		TIMER_ID = 42,
		TIMER_INTERVAL = 1000
	};

	bool Translate();
	void InitRefreshButton();

public:
	enum { IDD = IDD_PROPPAGE_COPYIMAGEGENERAL };

	CCopyImageGeneralPage();
	~CCopyImageGeneralPage();

	bool OnApply();
	void OnHelp();

	BEGIN_MSG_MAP(CCopyImageGeneralPage)
		MESSAGE_HANDLER(WM_INITDIALOG,OnInitDialog)
		MESSAGE_HANDLER(WM_DESTROY,OnDestroy)
		MESSAGE_HANDLER(WM_TIMER,OnTimer)
		COMMAND_HANDLER(IDC_SOURCECOMBO,CBN_SELCHANGE,OnSourceChange)
		COMMAND_HANDLER(IDC_REFRESHBUTTON,BN_CLICKED,OnRefresh)
		COMMAND_ID_HANDLER(IDC_BROWSEBUTTON,OnBrowse)

		CHAIN_MSG_MAP(CPropertyPageImpl<CCopyImageGeneralPage>)
	END_MSG_MAP()

	LRESULT OnInitDialog(UINT uMsg,WPARAM wParam,LPARAM lParam,BOOL &bHandled);
	LRESULT OnDestroy(UINT uMsg,WPARAM wParam,LPARAM lParam,BOOL &bHandled);
	LRESULT OnTimer(UINT uMsg,WPARAM wParam,LPARAM lParam,BOOL &bHandled);

	LRESULT OnSourceChange(WORD wNotifyCode,WORD wID,HWND hWndCtl,BOOL &bHandled);
	LRESULT OnRefresh(WORD wNotifyCode,WORD wID,HWND hWndCtl,BOOL &bHandled);
	LRESULT OnBrowse(WORD wNotifyCode,WORD wID,HWND hWndCtl,BOOL &bHandled);

	TCHAR *GetFileName();
};