/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMessageChangeAction.h>

@class NSArray;

@interface EMUndoMessageAction : EMMessageChangeAction {

	NSArray* _individualActions;

}

@property (nonatomic,copy,readonly) NSArray * individualActions;              //@synthesize individualActions=_individualActions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(NSArray *)individualActions;
-(id)initWithIndividualActions:(id)arg1 ;
@end
