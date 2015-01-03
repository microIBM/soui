/**
* Copyright (C) 2014-2050 
* All rights reserved.
* 
* @file       SwndContainer-i.h
* @brief      
* @version    v1.0      
* @author     SOUI group   
* @date       2014/08/02
* 
* Describe    DUI窗口容器接口
*/

#pragma once

#include "event/Events.h"
#include "SMsgLoop.h"

namespace SOUI
{

    struct IAcceleratorMgr;

    /**
    * @struct     ITimelineHandler
    * @brief      时间轴处理接口
    * 
    * Describe    
    */
    struct ITimelineHandler
    {
        virtual void OnNextFrame()=0;
    };

    /**
    * @struct     ISwndContainer
    * @brief      SOUI窗口容器接口
    * 
    * Describe    
    */
    struct ISwndContainer : public ITimelineHandler
    {
        virtual BOOL RegisterDragDrop(SWND swnd,IDropTarget *pDropTarget)=0;

        virtual BOOL RevokeDragDrop(SWND swnd)=0;

        virtual BOOL OnFireEvent(EventArgs &evt)=0;

        virtual HWND GetHostHwnd()=0;

        virtual const SStringW & GetTranslatorContext()=0;

        virtual BOOL IsTranslucent()=0;

        virtual CRect GetContainerRect()=0;

        virtual IRenderTarget * OnGetRenderTarget(const CRect & rc,DWORD gdcFlags)=0;

        virtual void OnReleaseRenderTarget(IRenderTarget *pRT,const CRect &rc,DWORD gdcFlags)=0;

        virtual void OnRedraw(const CRect &rc)=0;

        virtual SWND OnGetSwndCapture()=0;

        virtual BOOL OnReleaseSwndCapture()=0;

        virtual SWND OnSetSwndCapture(SWND swnd)=0;

        virtual void OnSetSwndFocus(SWND swnd)=0;

        virtual SWND SwndGetHover()=0;

        virtual SWND SwndGetFocus()=0;

        virtual BOOL SwndCreateCaret(HBITMAP hBmp,int nWidth,int nHeight)=0;

        virtual BOOL SwndShowCaret(BOOL bShow)=0;

        virtual BOOL SwndSetCaretPos(int x,int y)=0;

        virtual BOOL SwndUpdateWindow()=0;

        virtual IAcceleratorMgr* GetAcceleratorMgr()=0;

        virtual BOOL RegisterTimelineHandler(ITimelineHandler *pHandler)=0;

        virtual BOOL UnregisterTimelineHandler(ITimelineHandler *pHandler)=0;

        virtual SMessageLoop * GetMsgLoop() =0;
    };


}//namespace SOUI

