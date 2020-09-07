/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSProcessIdentifier, RBSProcessIdentity, NSString;

@interface RBSTarget : NSObject <BSXPCSecureCoding, RBSProcessMatching, NSCopying> {

	RBSProcessIdentifier* _processIdentifier;
	RBSProcessIdentity* _processIdentity;
	NSString* _environment;
	NSString* _picoDesc;

}

@property (getter=isSystem,nonatomic,readonly) BOOL system; 
@property (nonatomic,readonly) RBSProcessIdentifier * processIdentifier;              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * processIdentity;                  //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * environment;                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * picoDesc;                                   //@synthesize picoDesc=_picoDesc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)targetWithProcessIdentity:(id)arg1 ;
+(id)currentProcess;
+(id)targetWithProcessIdentifier:(id)arg1 ;
+(id)targetWithProcessIdentifier:(id)arg1 environmentIdentifier:(id)arg2 ;
+(id)systemTarget;
+(id)targetWithProcessIdentity:(id)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithPid:(int)arg1 ;
+(id)targetWithPid:(int)arg1 environmentIdentifier:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)euid;
-(RBSProcessIdentifier *)processIdentifier;
-(NSString *)environment;
-(BOOL)matchesProcess:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)copyWithEuid:(unsigned)arg1 ;
-(NSString *)picoDesc;
-(id)processPredicate;
-(RBSProcessIdentity *)processIdentity;
-(id)_initWithProcessIdentifier:(id)arg1 processIdentity:(id)arg2 environmentIdentifier:(id)arg3 euid:(unsigned)arg4 ;
-(BOOL)isSystem;
@end
