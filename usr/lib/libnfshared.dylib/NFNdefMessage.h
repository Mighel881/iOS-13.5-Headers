/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NFNdefMessage <NSObject>
@property (nonatomic,readonly) NSArray * records; 
@required
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2;
-(id)asData;
-(NSArray *)records;
-(void)addRecord:(id)arg1;
-(id)decode;
-(id)initWithNDEFMessage:(id)arg1;
-(void)addRecordArray:(id)arg1;

@end

