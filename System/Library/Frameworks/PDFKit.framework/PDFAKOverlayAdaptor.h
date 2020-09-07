/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFAKOverlayAdaptorPrivate, PDFView;

@interface PDFAKOverlayAdaptor : NSObject {

	PDFAKOverlayAdaptorPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFView * pdfView; 
+(id)instanceForPlatformWithPDFView:(id)arg1 ;
-(void)dealloc;
-(void)teardown;
-(PDFView *)pdfView;
-(id)_pdfView;
-(id)initWithPDFView:(id)arg1 ;
-(void)_currentPageChanged:(id)arg1 ;
-(void)_teardown;
-(void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_uninstallAllOverlays;
-(void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1 ;
-(void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1 ;
-(void)_uninstallOverlayAtIndex:(unsigned long long)arg1 ;
-(id)_annotationController;
-(void)_pageRotationChanged:(id)arg1 ;
-(void)pdfView:(id)arg1 willSetDocument:(id)arg2 ;
-(void)pdfView:(id)arg1 didSetDocument:(id)arg2 ;
-(void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)_selectionChanged:(id)arg1 ;
-(void)_selectionWillBeginChanging:(id)arg1 ;
-(void)_selectionDidEndChanging:(id)arg1 ;
@end
