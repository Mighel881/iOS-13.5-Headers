/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface QPHistoryDecoder : NSObject
+(id)getTransactionDate:(id)arg1 ;
+(id)getTransactionAmount:(id)arg1 ;
+(unsigned short)getHistoryNumber:(id)arg1 ;
+(id)getDPAN:(id)arg1 ;
+(unsigned short)getTypeOfUse:(id)arg1 ;
+(unsigned short)getExpirationDate:(id)arg1 ;
+(id)generateEndEventFromHCI:(id)arg1 withTransceiver:(id)arg2 ;
+(id)parseQuickPayHistoryBlocks:(id)arg1 ;
+(unsigned short)getATC:(id)arg1 ;
@end

