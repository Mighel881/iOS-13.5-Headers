/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMFCore/FMFCore-Structs.h>
@interface FMIPPhoneNumberUtils : NSObject
+(id)countryCode;
+(id)formatPhoneNumber:(id)arg1 ;
+(id)normalizedPhoneNumber:(id)arg1 ;
+(id)unformatPhoneNumber:(id)arg1 ;
+(BOOL)isEmail:(id)arg1 ;
+(BOOL)isPhoneNumberValid:(id)arg1 ;
+(id)formatFullyQualifiedPhoneNumber:(id)arg1 ;
+(BOOL)updateTextView:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
+(BOOL)updateTextField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
+(id)completeNumberForPhoneNumber:(id)arg1 formatted:(BOOL)arg2 ;
+(BOOL)handle:(id)arg1 matchesHandle:(id)arg2 ;
@end
