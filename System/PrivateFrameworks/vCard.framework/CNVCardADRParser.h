/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNVCardADRParser : NSObject
+(id)valueWithParser:(id)arg1 ;
+(void)processExtensionValuesForLines:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3 ;
+(id)parseStreetAddressComponentsWithParser:(id)arg1 ;
+(void)collectStreetAddressComponentsIntoSingleKeyInAddress:(id)arg1 ;
+(BOOL)parseNextStringWithParser:(id)arg1 components:(id)arg2 key:(id)arg3 ;
+(id)addressValueWithPrimaryAddress:(id)arg1 extendedAddress:(id)arg2 poBox:(id)arg3 ;
+(id)countryCodeForLine:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3 ;
@end
