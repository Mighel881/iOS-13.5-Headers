/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_SBUIPopoverExtensionHostInterface.h>

@protocol _SBUIPopoverExtensionHostDelegate;
@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface> {

	id<_SBUIPopoverExtensionHostDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SBUIPopoverExtensionHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<_SBUIPopoverExtensionHostDelegate>)delegate;
-(void)setDelegate:(id<_SBUIPopoverExtensionHostDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_extensionRequestsDismiss;
@end
