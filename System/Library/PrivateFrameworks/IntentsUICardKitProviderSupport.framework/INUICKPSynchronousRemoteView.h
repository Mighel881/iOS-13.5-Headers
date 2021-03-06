/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUICardKitProviderSupport/IntentsUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIView.h>

@protocol INUICKPSynchronousRemoteViewDelegate;
@interface INUICKPSynchronousRemoteView : UIView {

	id<INUICKPSynchronousRemoteViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUICKPSynchronousRemoteViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<INUICKPSynchronousRemoteViewDelegate>)delegate;
-(void)setDelegate:(id<INUICKPSynchronousRemoteViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
@end

