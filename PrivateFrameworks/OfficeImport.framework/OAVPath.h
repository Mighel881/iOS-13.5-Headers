/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVPath : NSObject
+(EshComputedValue)noneParam;
+(int)parseCommand:(const char**)arg1 ;
+(EshComputedValue)parseParam:(const char**)arg1 first:(BOOL)arg2 ;
+(void)writePath:(id)arg1 toString:(id)arg2 ;
+(void)readPath:(id)arg1 toGeometry:(id)arg2 ;
@end
