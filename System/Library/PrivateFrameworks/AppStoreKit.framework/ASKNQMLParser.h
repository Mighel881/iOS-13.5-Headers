/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASKNQMLParser <NSObject>
@required
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
-(void)parserDidStartDocument:(id)arg1;
-(void)parserDidEndDocument:(id)arg1;
-(void)parserDidStartListElement:(id)arg1;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3;
-(void)parserDidFindNewline:(id)arg1;
-(void)parserDidEndListElement:(id)arg1;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;
-(void)parser:(id)arg1 didFindCharacters:(id)arg2;

@end

