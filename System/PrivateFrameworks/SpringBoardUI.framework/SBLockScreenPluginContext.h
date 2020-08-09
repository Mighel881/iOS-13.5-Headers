/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBSProcess, SBLockScreenPluginLifecycleObserver;
@class NSString, NSDictionary, FBProcess;

@interface SBLockScreenPluginContext : NSObject <BSDescriptionProviding, NSCopying> {

	NSString* _name;
	NSDictionary* _userInfo;
	FBProcess*<FBSProcess> _process;
	/*^block*/id _auxiliaryAnimation;
	id<SBLockScreenPluginLifecycleObserver> _observer;

}

@property (nonatomic,retain) FBProcess*<FBSProcess> process;                                //@synthesize process=_process - In the implementation block
@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id<SBLockScreenPluginLifecycleObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) id auxiliaryAnimation;                                           //@synthesize auxiliaryAnimation=_auxiliaryAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithName:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SBLockScreenPluginLifecycleObserver>)observer;
-(NSDictionary *)userInfo;
-(void)setName:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setObserver:(id<SBLockScreenPluginLifecycleObserver>)arg1 ;
-(FBProcess*<FBSProcess>)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setProcess:(FBProcess*<FBSProcess>)arg1 ;
-(void)setAuxiliaryAnimation:(id)arg1 ;
-(id)auxiliaryAnimation;
@end
