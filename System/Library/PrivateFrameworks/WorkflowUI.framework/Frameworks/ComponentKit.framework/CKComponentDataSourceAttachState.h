/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ComponentKit/ComponentKit-Structs.h>
@class NSSet;

@interface CKComponentDataSourceAttachState : NSObject {

	CKComponentLayout* _layout;
	int _scopeIdentifier;
	NSSet* _mountedComponents;

}

@property (nonatomic,readonly) NSSet * mountedComponents;              //@synthesize mountedComponents=_mountedComponents - In the implementation block
@property (nonatomic,readonly) int scopeIdentifier;                    //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
-(const CKComponentLayout*)layout;
-(int)scopeIdentifier;
-(NSSet *)mountedComponents;
-(id)initWithScopeIdentifier:(int)arg1 mountedComponents:(id)arg2 layout:(const CKComponentLayout*)arg3 ;
@end
