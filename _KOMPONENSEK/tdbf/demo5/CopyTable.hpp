// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CopyTable.pas' rev: 4.00

#ifndef CopyTableHPP
#define CopyTableHPP

#pragma delphiheader begin
#pragma option push -w-
#include <dbf.hpp>	// Pascal unit
#include <Db.hpp>	// Pascal unit
#include <DBGrids.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Copytable
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TCopyTableForm;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TCopyTableForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Db::TDataSource* DataSource1;
	Dbgrids::TDBGrid* DBGrid1;
	Dbgrids::TDBGrid* DBGrid2;
	Db::TDataSource* DataSource2;
	Extctrls::TPanel* Panel1;
	Extctrls::TPanel* Panel2;
	Stdctrls::TButton* Copy1In2;
	Stdctrls::TButton* Clear1;
	Stdctrls::TButton* Add100_1;
	Dbf::TDbf* Dbf1;
	Dbf::TDbf* Dbf2;
	Db::TIntegerField* Dbf1Field1;
	Db::TStringField* Dbf1Field2;
	void __fastcall Clear1Click(System::TObject* Sender);
	void __fastcall Add100_1Click(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall Copy1In2Click(System::TObject* Sender);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TCopyTableForm(Classes::TComponent* AOwner) : Forms::TForm(
		AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TCopyTableForm(Classes::TComponent* AOwner, int 
		Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TCopyTableForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TCopyTableForm(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TCopyTableForm* CopyTableForm;

}	/* namespace Copytable */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Copytable;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CopyTable
