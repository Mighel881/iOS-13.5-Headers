/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject {

	AXFBFakeProcessState* _state;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) AXFBFakeProcessState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(AXFBFakeProcessState *)state;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setState:(AXFBFakeProcessState *)arg1 ;
@end

