/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCDumper : NSObject
-(void)reset;
-(void)write:(const char*)arg1 ;
-(void)changeAttributes:(int)arg1 ;
-(id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(id)stringForReset;
-(void)startFgColor:(int)arg1 attr:(int)arg2 ;
-(void)startBgColor:(int)arg1 attr:(int)arg2 ;
-(void)startFgColor:(int)arg1 ;
-(void)startBgColor:(int)arg1 ;
-(void)startAttributes:(int)arg1 ;
-(void)changeFgColor:(int)arg1 ;
-(void)changeBgColor:(int)arg1 ;
@end

