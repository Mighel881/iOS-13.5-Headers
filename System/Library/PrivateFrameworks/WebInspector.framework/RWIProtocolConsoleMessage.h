/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject

@property (assign,nonatomic) long long source; 
@property (assign,nonatomic) long long level; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int line; 
@property (assign,nonatomic) int column; 
@property (assign,nonatomic) int repeatCount; 
@property (nonatomic,copy) NSArray * parameters; 
@property (nonatomic,copy) NSArray * stackTrace; 
@property (nonatomic,copy) NSString * networkRequestId; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(long long)level;
-(NSString *)url;
-(NSArray *)parameters;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setParameters:(NSArray *)arg1 ;
-(void)setRepeatCount:(int)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(int)line;
-(void)setLine:(int)arg1 ;
-(int)repeatCount;
-(int)column;
-(void)setColumn:(int)arg1 ;
-(id)initWithSource:(long long)arg1 level:(long long)arg2 text:(id)arg3 ;
-(void)setStackTrace:(NSArray *)arg1 ;
-(NSArray *)stackTrace;
-(void)setNetworkRequestId:(NSString *)arg1 ;
-(NSString *)networkRequestId;
@end

