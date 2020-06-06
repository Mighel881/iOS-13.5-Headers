/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@protocol _SBUIPopoverExtensionHostInterface;
@interface _SBUIPopoverExtensionContext : NSExtensionContext {

	id<_SBUIPopoverExtensionHostInterface> _hostService;

}

@property (assign,nonatomic,__weak) id<_SBUIPopoverExtensionHostInterface> hostService;              //@synthesize hostService=_hostService - In the implementation block
-(id<_SBUIPopoverExtensionHostInterface>)hostService;
-(void)setHostService:(id<_SBUIPopoverExtensionHostInterface>)arg1 ;
-(void)requestDismiss;
@end
