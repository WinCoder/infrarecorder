/*
 * InfraRecorder - CD/DVD burning software
 * Copyright (C) 2006-2009 Christian Kindahl
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

enum eStringTable
{
	GENERAL_ERROR = 0,
	GENERAL_WARNING,
	GENERAL_INFORMATION,
	GENERAL_QUESTION,

	ERROR_REGISTRYWRITE,
	ERROR_FILEWRITE,
	ERROR_LOADSETTINGS,
	ERROR_AUDIOADDFOLDER,
	ERROR_LOADPROJECTXML,
	ERROR_LOADPROJECT,
	ERROR_PROJECTVERSION,
	ERROR_UNSUPCHARSET,
	ERROR_RELOADDRIVE,
	ERROR_SECTOR,
	ERROR_COMMANDLINE,

	CONFIRM_AUTORUNENABLED,
	CONFIRM_WRITECANCEL,
	CONFIRM_REMOVEITEMS,
	CONFIRM_SAVEPROJECT,
	CONFIRM_CREATEMIXIMAGE,

	INIT_SCANBUS,
	INIT_LOADCAPABILITIES,
	INIT_LOADINFOEX,
	INIT_FOUNDDEVICES,
	INIT_DEVICECD,
	INIT_TRACK,

	FAILURE_SCANBUS,
	FAILURE_LOADCAP,
	FAILURE_LOADINFOEX,
	FAILURE_NORECORDERS,
	FAILURE_NODEVICES,
	FAILURE_CDRTOOLS,
	FAILURE_NOMEDIA,
	FAILURE_UNSUPRW,
	FAILURE_ERASE,
	FAILURE_BADSECTORSIZE,
	FAILURE_WRITE,
	FAILURE_UNSUPAUDIO,
	FAILURE_FILENOTFOUND,
	FAILURE_CREATECDTEXT,
	FAILURE_AUDIOCODING,
	FAILURE_LOADDRIVE,
	FAILURE_READSOURCEDISC,
	FAILURE_DEEPDIR,
	FAILURE_DVDSUPPORT,

	// Project properties.
	PROJECTPROP_TITLE,
	PROJECTPROP_ISOLEVEL1,
	PROJECTPROP_ISOLEVEL2,
	PROJECTPROP_ISOLEVEL3,
	PROJECTPROP_MODE1,
	PROJECTPROP_MODE2,
	PROJECTPROP_TRACKPROP,

	// Container titles.
	TITLE_EXPLORERVIEW,
	TITLE_PROJECTVIEW,

	// Miscellaneous.
	MISC_MAXIMUM,
	MISC_NOTAVAILABLE,
	MISC_BURN,
	MISC_BURNCOMPILATION,
	MISC_NEWFOLDER,
	MISC_MINUTES,
	MISC_AUTODETECT,
	MISC_SPECIFYTRACKFOLDER,
	MISC_SPECIFYFOLDER,

	// Projects.
	PROJECT_DATA,
	PROJECT_AUDIO,
	PROJECT_MIXED,
	PROJECT_CONTENTS,

	// Properties.
	PROPERTIES_TITLE,
	PROPERTIES_DEVICELOC,

	// Advanced properties.
	ADVPROP_MODE2FORM1,
	ADVPROP_MODE2FORM2,
	ADVPROP_READDIGAUDIO,
	ADVPROP_READMULTSESSION,
	ADVPROP_READFIXPACKET,
	ADVPROP_READBARCODE,
	ADVPROP_READRWSUBCODE,
	ADVPROP_READRAWPWSC,
	ADVPROP_SIMULATION,
	ADVPROP_BUFRECORDING,
	ADVPROP_C2EP,
	ADVPROP_EJECTCDSS,
	ADVPROP_CHANGEDISCSIDE,
	ADVPROP_INDIVIDUALDP,
	ADVPROP_RETURNCDCN,
	ADVPROP_RETURNCDISRC,
	ADVPROP_DELIVCOMPOSITE,
	ADVPROP_PLAYAUDIOCD,
	ADVPROP_HASLESIC,
	ADVPROP_LMOPU,
	ADVPROP_ALLOWML,
	ADVPROP_RESTARTNSDARA,
	ADVPROP_RETURNRWSUBCODE,
	ADVPROP_INDIVIDUALVC,
	ADVPROP_INDEPENDENTMUTE,
	ADVPROP_DOPORT1,
	ADVPROP_DOPORT2,
	ADVPROP_DOSENDDIGDAT,
	ADVPROP_DOSETLRCK,
	ADVPROP_HASVALIDDATA,
	DEVICETYPE_CDREADER,
	DEVICETYPE_DVDREADER,
	DEVICETYPE_CDRECORDER,
	DEVICETYPE_DVDRECORDER,

	// Disc blanking.
	BLANKMODE_FULL,
	BLANKMODE_MINIMAL,
	BLANKMODE_UNCLOSE,
	BLANKMODE_SESSION,

	// Write methods.
	WRITEMODE_SAO,
	WRITEMODE_TAO,
	WRITEMODE_TAONOPREGAP,
	WRITEMODE_RAW96R,
	WRITEMODE_RAW16,
	WRITEMODE_RAW96P,

	// Eject menu.
	EJECTMENU_NODRIVES,

	// Write modes.
	WRITEMODE_REAL,
	WRITEMODE_SIMULATION,

	// Column titles.
	COLUMN_TIME,
	COLUMN_EVENT,
	COLUMN_ID,
	COLUMN_VENDOR,
	COLUMN_IDENTIFICATION,
	COLUMN_REVISION,
	COLUMN_NAME,
	COLUMN_SIZE,
	COLUMN_TYPE,
	COLUMN_MODIFIED,
	COLUMN_PATH,
	COLUMN_TRACK,
	COLUMN_TITLE,
	COLUMN_LENGTH,
	COLUMN_LOCATION,
	COLUMN_ARTIST,
	COLUMN_ADDRESS,
	COLUMN_DESCRIPTION,
	COLUMN_EXTENSIONS,

	// Status dialog.
	PROGRESS_STATUS,
	PROGRESS_DEVICE,
	PROGRESS_TOTAL,
	PROGRESS_INIT,
	PROGRESS_DONE,
	PROGRESS_CANCELED,
	PROGRESS_GRACETIME,
	PROGRESS_BEGINERASE,
	PROGRESS_BEGINFIXATE,
	PROGRESS_BEGINWRITE,
	PROGRESS_BEGINTRACK,
	PROGRESS_BEGINDISCIMAGE,
	PROGRESS_IMAGEDEVICE,
	PROGRESS_BEGINREADTRACK,
	PROGRESS_BEGINSCANTRACK,
	PROGRESS_BEGINREADDISC,

	// Status strings.
	STATUS_ERASE,
	STATUS_WRITEDATA,
	STATUS_WRITE,
	STATUS_WRITEPREGAP,
	STATUS_FILLBUFFER,
	STATUS_FIXATE,
	STATUS_WRITEIMAGE,
	STATUS_READTRACK,
	STATUS_SCANTRACK,
	STATUS_C2TOTAL,
	STATUS_C2RATE,
	STATUS_READDISC,

	// Status titles.
	STITLE_ERASE,
	STITLE_BURNIMAGE,
	STITLE_CREATEIMAGE,
	STITLE_BURNCOMPILATION,
	STITLE_FIXATE,
	STITLE_READTRACK,
	STITLE_SCANTRACK,
	STITLE_COPYDISC,

	// Sucess messages.
	SUCCESS_ERASE,
	SUCCESS_WRITE,
	SUCCESS_FIXATE,
	SUCCESS_CREATEIMAGE,
	SUCCESS_READTRACK,
	SUCCESS_SCANTRACK,
	SUCCESS_READDISC,

	// Warning messages.
	WARNING_FIXATE,

	// Information messages.
	INFO_UNSUPERASEMODE,
	INFO_ERASERETRY,

	// Property page titles.
	TITLE_GENERAL,
	TITLE_ADVANCED,
	TITLE_FIELDS,
	TITLE_AUDIO,
	TITLE_CONFIGURATION,
	TITLE_LANGUAGE,
	TITLE_SHELLEXT,

	// Copy disc.
	COPYDISC_TITLE,

	// Disc information.
	DISC_UNKNOWN,
	DISC_SEQUENTIAL,
	DISC_RESTRICTEDOVERWRITE,
	DISC_REVISION,
	DISC_NOREGION,
	DISC_BLANK,
	DISC_INCOMPLETE,
	DISC_FIXATED,
	DISC_RANDOMACCESS,
	DISC_EMPTY,
	DISC_RESERVED,
	DISC_COMPLETE,
	DISC_NOT,
	DISC_STATUS,

	// Miscellaneous.
	WARNING_DISCSIZE,
	FAILURE_OPENSESSION,

	// Added version 0.40.
	ERROR_LOADCODECS,
	PROGRESS_DECODETRACKS,
	ERROR_NODECODER,
	ERROR_WAVECODEC,
	ERROR_CODECINIT,
	ERROR_ENCODEDATA,
	SUCCESS_DECODETRACK,
	ERROR_TARGETFOLDER,
	SUCCESS_ENCODETRACK,
	PROGRESS_ENCODETRACK,

	// Added version 0.41.
	ERROR_FIFOSIZE,
	PROJECTPROP_ISOLEVEL4,
	WARNING_CLONEWRITEMETHOD,
	TITLE_READ,
	MISC_AUTO,
	COPYIMAGE_TITLE,
	INFO_COPYDISC,
	INFO_RAWIMAGE,
	PROGRESS_BEGINESTIMAGESIZE,
	SUCCESS_ESTIMAGESIZE,
	ERROR_ESTIMAGESIZE,
	PROGRESS_ESTIMAGESIZE,
	SPACEMETER_USED,
	SPACEMETER_FREE,
	ADVPROP_SAO,
	ADVPROP_TAO,
	ADVPROP_RAW96R,
	ADVPROP_RAW16,
	ADVPROP_RAW96P,
	INFO_WRITESPEED,
	TITLE_BOOT,
	ERROR_NUMBOOTIMAGES,
	BOOTEMU_NONE,
	BOOTEMU_FLOPPY,
	BOOTEMU_HARDDISK,
	COLUMN_EMULATION,
	TITLE_EDITBOOTIMAGE,

	// Added version 0.42.
	PROJECT_DVDVIDEO,
	WARNING_OLDPROJECT,
	MISC_SPECIFYDVDFOLDER,
	ERROR_INVALIDDVDFOLDER,
	FAILURE_WRITELEADIN,
	FAILURE_INITDRIVE,
	FAILURE_DVDRWDUMMY,
	PROGRESS_RELOADMEDIA,
	STATUS_VERIFY,
	SUCCESS_VERIFY,
	FAILURE_VERIFY,
	PROGRESS_BEGINVERIFY,
	FAILURE_VERIFYNOFILE,
	FAILURE_VERIFYREADERROR,
	STRINGTABLE_PLACEHOLDER1,
	STRINGTABLE_PLACEHOLDER2,
	STRINGTABLE_PLACEHOLDER3,

	// Added version 0.43.
	DRIVELETTER_TITLE,
	FORMATMODE_QUICK,
	FORMATMODE_FULL,
	MEDIA_INSERT,
	MEDIA_UNSUPPORTED,
	STATUS_FORMAT,
	STATUS_FORMATBKGND,
	STATUS_CLOSETRACK,
	PROGRESS_BEGINFORMAT,
	FAILURE_FORMAT,
	FAILURE_STOPBKGNDFORMAT,
	SUCCESS_FORMAT,

	// Added version 0.44.
	STATUS_REREADSECTOR,
	STATUS_READTRACK2,
	ERROR_MOVESAMESRCDST,
	MISC_MODIFIED,
	ERROR_EXISTINGFILENAME,
	TBCUSTOMIZE_TEXTOPTIONS,
	TBCUSTOMIZE_ICONOPTIONS,
	TBCUSTOMIZE_SHOWTEXT,
	TBCUSTOMIZE_SHOWTEXTRIGHT,
	TBCUSTOMIZE_NOTEXT,
	TBCUSTOMIZE_ICONSMALL,
	TBCUSTOMIZE_ICONLARGE,
	TOOLBAR_OPEN,
	TOOLBAR_SAVE,
	TOOLBAR_PROJECTPROPERTIES,
	TOOLBAR_EXIT,
	TOOLBAR_BURNCOMPILATION,
	TOOLBAR_BURNIMAGE,
	TOOLBAR_COPY,
	TOOLBAR_TRACKS,
	TOOLBAR_ERASE,
	TOOLBAR_FIXATE,
	TOOLBAR_LOG,
	TOOLBAR_CONFIGURATION,
	TOOLBAR_DEVICES,
	TOOLBAR_HELP,
	TOOLBAR_ABOUT,
	ERROR_OPENDEVICE,
	MEDIA_INSERTBLANK,
	INFO_INSERTBLANK,
	INFO_INSERTSOURCE,
	WARNING_NOFIXATION,

	// Added version 0.45.
	INFO_RELOAD,
	PROGRESS_FAILED,
	FAILURE_CREATEIMAGE,
	TITLE_FILESYSTEM,
	ERROR_IMPORTSESSION,
	MISC_SESSION,
	MISC_TRACK,
	MISC_MODE,
	MISC_ERASENONEMPTY,
	WARNING_IMPORTFS,
	STITLE_VERIFYDISC,

	// Added version 0.46.
	ERROR_NUMCOPIES,
	INFO_NEXTCOPY,
	INFO_CREATECOPY,

	// Added version 0.47.
	ERROR_PROJECT_IMPORT,
	ERROR_PROJECT_IMPORT_FILE,

	// Added version 0.48.
	COLUMN_DRIVE
};

extern TCHAR *g_szStringTable[];