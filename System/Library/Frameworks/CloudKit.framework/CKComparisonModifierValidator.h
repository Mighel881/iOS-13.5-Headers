/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonModifierValidator : CKPredicateValidatorInstance {

	unsigned long long _modifier;

}

@property (assign,nonatomic) unsigned long long modifier;              //@synthesize modifier=_modifier - In the implementation block
-(unsigned long long)modifier;
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithModifier:(unsigned long long)arg1 ;
-(void)setModifier:(unsigned long long)arg1 ;
@end

