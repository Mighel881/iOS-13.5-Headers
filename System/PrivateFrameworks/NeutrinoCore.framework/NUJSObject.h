/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSProxy.h>

@interface NUJSObject : NUJSProxy
+(OpaqueJSClassRef)jsClass;
-(id)toObject;
-(id)toString;
-(BOOL)hasProperty:(id)arg1 ;
-(void)enumerateProperties:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)JSValueWithContext:(id)arg1 ;
@end

