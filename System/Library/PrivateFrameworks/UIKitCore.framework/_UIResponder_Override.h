/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIResponder;

@interface _UIResponder_Override : NSObject {

	UIResponder* _owner;
	UIResponder* _target;
	long long _types;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;               //@synthesize owner=_owner - In the implementation block
@property (nonatomic,__weak,readonly) UIResponder * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long types;                          //@synthesize types=_types - In the implementation block
+(id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3 ;
-(void)dealloc;
-(id)description;
-(UIResponder *)target;
-(UIResponder *)owner;
-(long long)types;
@end

