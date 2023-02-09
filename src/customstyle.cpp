#include "project_pch.h"
#include "customstyle.h"

CustomStyle::CustomStyle()
{
    iconMap[QStyle::SP_DialogOpenButton] = ":/Images/CustomStyle/DialogOpen.png";
    iconMap[QStyle::SP_DialogApplyButton] = ":/Images/CustomStyle/apply.png";
    iconMap[QStyle::SP_DialogCloseButton] = ":/Images/CustomStyle/close.png";
    iconMap[IconsEnum::SP_Save1] = ":/Images/CustomStyle/Save.png";
    iconMap[IconsEnum::SP_SaveAs1] = ":/Images/CustomStyle/Save_as.png";
    iconMap[IconsEnum::SP_AppExit] = ":/Images/CustomStyle/Exit.png";
    iconMap[IconsEnum::SP_Reload1] = ":/Images/CustomStyle/reload1.png";
    iconMap[IconsEnum::SP_Reload2] = ":/Images/CustomStyle/Reload2.png";
    iconMap[IconsEnum::SP_Restart1] = ":/Images/CustomStyle/Restart1.png";
    iconMap[IconsEnum::SP_ReloadDatabase] = ":/Images/CustomStyle/ReloadDatabase.png";
    iconMap[IconsEnum::SP_StopWatch1] = ":/Images/CustomStyle/StopWatch.png";
    iconMap[IconsEnum::SP_StopWatch2] = ":/Images/CustomStyle/Stopwatch2.png";
    iconMap[IconsEnum::SP_StopWatch3] = ":/Images/CustomStyle/StopWatch3.png";
    iconMap[IconsEnum::SP_Apply1] = ":/Images/CustomStyle/apply.png";
    iconMap[IconsEnum::SP_Apply2] = ":/Images/CustomStyle/Apply2.png";
    iconMap[IconsEnum::SP_Apply3] = ":/Images/CustomStyle/Apply3.png";
    iconMap[IconsEnum::SP_Apply4] = ":/Images/CustomStyle/Apply4.png";
    iconMap[IconsEnum::SP_Plus1] = ":/Images/CustomStyle/Plus1.png";
    iconMap[IconsEnum::SP_Plus2] = ":/Images/CustomStyle/Plus2.png";
    iconMap[IconsEnum::SP_Minus1] = ":/Images/CustomStyle/Minus1.png";
    iconMap[IconsEnum::SP_Minus2] = ":/Images/CustomStyle/Minus2.png";
    iconMap[IconsEnum::SP_CheckBoxChecked1] = ":/Images/CustomStyle/CheckBoxChecked1.png";
    iconMap[IconsEnum::SP_Search1] = ":/Images/CustomStyle/Search1.png";
    iconMap[IconsEnum::SP_Services1] = ":/Images/CustomStyle/Services1.png";
    iconMap[IconsEnum::SP_Setting1] = ":/Images/CustomStyle/Setting1.png";
    iconMap[IconsEnum::SP_Setting2] = ":/Images/CustomStyle/Setting2.png";
    iconMap[IconsEnum::SP_Trash1] = ":/Images/CustomStyle/Trash1.png";
    iconMap[IconsEnum::SP_Trash2] = ":/Images/CustomStyle/Trash2.png";
    iconMap[IconsEnum::SP_Cancel1] = ":/Images/CustomStyle/Cancel1.png";
    iconMap[IconsEnum::SP_Login1] = ":/Images/CustomStyle/Login1.png";
    iconMap[IconsEnum::SP_Appearance1] = ":/Images/CustomStyle/Appearance1.png";
    iconMap[IconsEnum::SP_Edit1] = ":/Images/CustomStyle/Edit1.png";
    iconMap[IconsEnum::SP_Edit2] = ":/Images/CustomStyle/Edit2.png";
    iconMap[IconsEnum::SP_Edit3] = ":/Images/CustomStyle/Edit3.png";
    iconMap[IconsEnum::SP_Erase1] = ":/Images/CustomStyle/Erase1.png";
    iconMap[IconsEnum::SP_ListView1] = ":/Images/CustomStyle/ListView1.png";
    iconMap[IconsEnum::SP_ListViewFilled1] = ":/Images/CustomStyle/ListViewFilled1.png";
    iconMap[IconsEnum::SP_FlagBy] = ":/Images/CustomStyle/flags/by.png";
    iconMap[IconsEnum::SP_FlagDe] = ":/Images/CustomStyle/flags/de.png";
    iconMap[IconsEnum::SP_FlagEn] = ":/Images/CustomStyle/flags/en.png";
    iconMap[IconsEnum::SP_FlagEs] = ":/Images/CustomStyle/flags/es.png";
    iconMap[IconsEnum::SP_FlagFr] = ":/Images/CustomStyle/flags/fr.png";
    iconMap[IconsEnum::SP_FlagRu] = ":/Images/CustomStyle/flags/ru.png";
    iconMap[IconsEnum::SP_FlagUa] = ":/Images/CustomStyle/flags/ua.png";
    iconMap[IconsEnum::SP_Table1] = ":/Images/CustomStyle/Table1.png";
    iconMap[IconsEnum::SP_ChangeUser1] = ":/Images/CustomStyle/ChangeUser1.png";
    iconMap[IconsEnum::SP_Print1] = ":/Images/CustomStyle/Print1.png";
    iconMap[IconsEnum::SP_PDF1] = ":/Images/CustomStyle/Pdf1.png";
    iconMap[IconsEnum::SP_PDF2] = ":/Images/CustomStyle/Pdf2.png";
    iconMap[IconsEnum::SP_Copy1] = ":/Images/CustomStyle/Copy1.png";
    iconMap[IconsEnum::SP_Cut1] = ":/Images/CustomStyle/Cut1.png";
    iconMap[IconsEnum::SP_Preview1] = ":/Images/CustomStyle/Preview1.png";
    iconMap[IconsEnum::SP_UAC1] = ":/Images/CustomStyle/Uac1.png";
    iconMap[IconsEnum::SP_CloudConfig1] = ":/Images/CustomStyle/CloudConfig1.png";
    iconMap[IconsEnum::SP_CloudDonwload1] = ":/Images/CustomStyle/CloudDonwload1.png";
    iconMap[IconsEnum::SP_CloudReload1] = ":/Images/CustomStyle/CloudReload1.png";
    iconMap[IconsEnum::SP_CloudSearch1] = ":/Images/CustomStyle/CloudSearch1.png";
    iconMap[IconsEnum::SP_CloudUpload1] = ":/Images/CustomStyle/CloudUpload1.png";
    iconMap[IconsEnum::SP_DatabaseAdd1] = ":/Images/CustomStyle/DatabaseAdd1.png";
    iconMap[IconsEnum::SP_DatabaseConfig] = ":/Images/CustomStyle/DatabaseConfig1.png";
    iconMap[IconsEnum::SP_DatabaseDownload1] = ":/Images/CustomStyle/DatabaseDownload1.png";
    iconMap[IconsEnum::SP_DatabaseEdit1] = ":/Images/CustomStyle/DatabaseEdit1.png";
    iconMap[IconsEnum::SP_DatabaseReload1] = ":/Images/CustomStyle/DatabaseReload1.png";
    iconMap[IconsEnum::SP_DatabaseRemove1] = ":/Images/CustomStyle/DatabaseRemove1.png";
    iconMap[IconsEnum::SP_DatabaseUpload1] = ":/Images/CustomStyle/DatabaseUpload1.png";
    iconMap[IconsEnum::SP_FileAdd1] = ":/Images/CustomStyle/FileAdd1.png";
    iconMap[IconsEnum::SP_FileCancel1] = ":/Images/CustomStyle/FileCancel1.png";
    iconMap[IconsEnum::SP_FileCheck1] = ":/Images/CustomStyle/FileCheck1.png";
    iconMap[IconsEnum::SP_FileDelete1] = ":/Images/CustomStyle/FileDelete1.png";
    iconMap[IconsEnum::SP_FileEdit1] = ":/Images/CustomStyle/FileEdit1.png";
    iconMap[IconsEnum::SP_FileOpen1] = ":/Images/CustomStyle/FileOpen1.png";
    iconMap[IconsEnum::SP_FileView1] = ":/Images/CustomStyle/FileView1.png";
    iconMap[IconsEnum::SP_FileCopy1] = ":/Images/CustomStyle/FileCopy1.png";
    iconMap[IconsEnum::SP_ArrowDown1] = ":/Images/CustomStyle/arrows/ArrowDown1.png";
    iconMap[IconsEnum::SP_ArrowDown1] = ":/Images/CustomStyle/arrows/ArrowDown1.png";
    iconMap[IconsEnum::SP_ArrowDownLeft1] = ":/Images/CustomStyle/arrows/ArrowDownLeft1.png";
    iconMap[IconsEnum::SP_ArrowDownRight1] = ":/Images/CustomStyle/arrows/ArrowDownRight1.png";
    iconMap[IconsEnum::SP_ArrowLeft1] = ":/Images/CustomStyle/arrows/ArrowLeft1.png";
    iconMap[IconsEnum::SP_ArrowRight1] = ":/Images/CustomStyle/arrows/ArrowRight1.png";
    iconMap[IconsEnum::SP_ArrowUp1] = ":/Images/CustomStyle/arrows/ArrowUp1.png";
    iconMap[IconsEnum::SP_ArrowUpLeft1] = ":/Images/CustomStyle/arrows/ArrowUpLeft1.png";
    iconMap[IconsEnum::SP_ArrowUpRight1] = ":/Images/CustomStyle/arrows/ArrowUpRight1.png";
    iconMap[IconsEnum::SP_Xml1] = ":/Images/CustomStyle/Xml1.png";
    iconMap[IconsEnum::SP_Import1] = ":/Images/CustomStyle/Import1.png";
    iconMap[IconsEnum::SP_Export1] = ":/Images/CustomStyle/Export1.png";
    iconMap[IconsEnum::SP_ExportXml1] = ":/Images/CustomStyle/ExportXml1.png";

    iconMap[IconsEnum::SP_Reset1] = ":/Images/CustomStyle/Reset1.png";
    iconMap[IconsEnum::SP_Shuffle1] = ":/Images/CustomStyle/Shuffle1.png";
    iconMap[IconsEnum::SP_InternetBrowser1] = ":/Images/CustomStyle/InternetBrowser1.png";
    iconMap[IconsEnum::SP_InternetBrowser2] = ":/Images/CustomStyle/InternetBrowser2.png";

    iconMap[IconsEnum::SP_ZoomIn1] = ":/Images/CustomStyle/zoom-in.png";
    iconMap[IconsEnum::SP_ZoomOut1] = ":/Images/CustomStyle/zoom-out.png";

    iconMap[IconsEnum::SP_Connected1] = ":/Images/CustomStyle/Connected1.png";
    iconMap[IconsEnum::SP_Disconnected1] = ":/Images/CustomStyle/Disconnected1.png";

    iconMap[IconsEnum::SP_PC1] = ":/Images/CustomStyle/PC1.png";
    iconMap[IconsEnum::SP_PC2] = ":/Images/CustomStyle/PC2.png";
    iconMap[IconsEnum::SP_PC3] = ":/Images/CustomStyle/PC3.png";
    iconMap[IconsEnum::SP_PC4] = ":/Images/CustomStyle/PC4.png";
    iconMap[IconsEnum::SP_PC5] = ":/Images/CustomStyle/PC5.png";

    iconMap[IconsEnum::SP_AddDocument1] = ":/Images/CustomStyle/AddDocument1.png";
    iconMap[IconsEnum::SP_AddDocument2] = ":/Images/CustomStyle/AddDocument2.png";
    iconMap[IconsEnum::SP_AddItem1] = ":/Images/CustomStyle/AddItem1.png";

    iconMap[IconsEnum::SP_OpenInBrowser1] = ":/Images/CustomStyle/OpenInBrowser1.png";
    iconMap[IconsEnum::SP_OpenInBrowser2] = ":/Images/CustomStyle/OpenInBrowser2.png";

    iconMap[IconsEnum::SP_Hide1] = ":/Images/CustomStyle/Hide1.png";

    iconMap[IconsEnum::SP_Asceding1] = ":/Images/CustomStyle/Asceding1.png";
    iconMap[IconsEnum::SP_Desceding1] = ":/Images/CustomStyle/Desceding1.png";

    iconMap[IconsEnum::SP_SearchNext1] = ":/Images/CustomStyle/SearchNext.png";
    iconMap[IconsEnum::SP_SearchPrev1] = ":/Images/CustomStyle/SearchPrev.png";

    iconMap[IconsEnum::SP_NewDocument1] = ":/Images/CustomStyle/NewDocument1.png";
    iconMap[IconsEnum::SP_NewDocument2] = ":/Images/CustomStyle/NewDocument2.png";
    iconMap[IconsEnum::SP_Undo1] = ":/Images/CustomStyle/Undo1.png";
    iconMap[IconsEnum::SP_Redo1] = ":/Images/CustomStyle/Redo1.png";

    iconMap[IconsEnum::SP_Paste1] = ":/Images/CustomStyle/Paste1.png";
    iconMap[IconsEnum::SP_Paste2] = ":/Images/CustomStyle/Paste2.png";

    iconMap[IconsEnum::SP_Radar1] = ":/Images/CustomStyle/Radar1.png";
    iconMap[IconsEnum::SP_Radar2] = ":/Images/CustomStyle/Radar2.png";

    iconMap[IconsEnum::SP_Record1] = ":/Images/CustomStyle/Record1.png";
    iconMap[IconsEnum::SP_Record2] = ":/Images/CustomStyle/Record2.png";
    iconMap[IconsEnum::SP_Record3] = ":/Images/CustomStyle/Record3.png";

    iconMap[IconsEnum::SP_RecordStop1] = ":/Images/CustomStyle/RecordStop1.png";
    iconMap[IconsEnum::SP_RecordStop2] = ":/Images/CustomStyle/RecordStop2.png";
    iconMap[IconsEnum::SP_RecordStop3] = ":/Images/CustomStyle/RecordStop3.png";

    iconMap[IconsEnum::SP_TextWidth1] = ":/Images/CustomStyle/TextWidth1.png";

    iconMap[IconsEnum::SP_Web1] = ":/Images/CustomStyle/Web1.png";

    iconMap[IconsEnum::SP_Chrome1] = ":/Images/CustomStyle/Chrome1.png";
    iconMap[IconsEnum::SP_Firefox1] = ":/Images/CustomStyle/Firefox1.png";
    iconMap[IconsEnum::SP_InternetExplorer1] = ":/Images/CustomStyle/InternetExplorer1.png";

    iconMap[IconsEnum::SP_Filter1] = ":/Images/CustomStyle/Filter1.png";
    iconMap[IconsEnum::SP_Filter2] = ":/Images/CustomStyle/Filter2.png";
    iconMap[IconsEnum::SP_Filter3] = ":/Images/CustomStyle/Filter3.png";
    iconMap[IconsEnum::SP_Filter4] = ":/Images/CustomStyle/Filter4.png";
    iconMap[IconsEnum::SP_FilterClear1] = ":/Images/CustomStyle/FilterClear1.png";
    iconMap[IconsEnum::SP_Infinity1] = ":/Images/CustomStyle/Infinity1.png";
    iconMap[IconsEnum::SP_Delete1] = ":/Images/CustomStyle/Delete1.png";

    iconMap[IconsEnum::SP_FormBuilder1] = ":/Images/CustomStyle/FormBuilder1.png";
    iconMap[IconsEnum::SP_FormBuilder2] = ":/Images/CustomStyle/FormBuilder2.png";
    iconMap[IconsEnum::SP_FormBuilder3] = ":/Images/CustomStyle/FormBuilder3.png";
    iconMap[IconsEnum::SP_FormBuilder4] = ":/Images/CustomStyle/FormBuilder4.png";

    iconMap[IconsEnum::SP_Recorder1] = ":/Images/CustomStyle/Recorder1.png";
    iconMap[IconsEnum::SP_Recorder2] = ":/Images/CustomStyle/Recorder2.png";

    iconMap[IconsEnum::SP_Check1] = ":/Images/CustomStyle/Check1.png";
    iconMap[IconsEnum::SP_Uncheck1] = ":/Images/CustomStyle/Unckeck1.png";
    iconMap[IconsEnum::SP_Replace1] = ":/Images/CustomStyle/Replace1.png";

    iconMap[IconsEnum::SP_AlwaysOnTop1] = ":/Images/CustomStyle/AlwaysOnTop1.png";
    iconMap[IconsEnum::SP_AlwaysOnTop2] = ":/Images/CustomStyle/AlwaysOnTop2.png";
    iconMap[IconsEnum::SP_AlwaysOnTop3] = ":/Images/CustomStyle/AlwaysOnTop3.png";
    iconMap[IconsEnum::SP_AlwaysOnTop4] = ":/Images/CustomStyle/AlwaysOnTop4.png";
    iconMap[IconsEnum::SP_WaitGif1] = ":/Images/CustomStyle/waitGif.gif";
}

CustomStyle::~CustomStyle()
{

}


QIcon CustomStyle::standardIcon(QStyle::StandardPixmap standardIcon,
                                const QStyleOption *option,
                                const QWidget *widget) const
{
    auto it = iconMap.find(standardIcon);
    if(it == iconMap.end())
    {
        return QProxyStyle::standardIcon(standardIcon, option, widget);
    } else
    {
        return QIcon(it.value());
    }
}

int CustomStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption *option, const QWidget *widget) const
{
    return QProxyStyle::pixelMetric( metric, option, widget ); // return default values for the rest

//    switch ( metric )
//    {
////    case QStyle::PM_SmallIconSize:
////        return 20; // here u want pixmaps size i assume
//    default:
//        return QProxyStyle::pixelMetric( metric, option, widget ); // return default values for the rest
//    }
}

