/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/EquationKit.framework/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EQKitLayoutElementaryStackRow <NSObject>
@property (nonatomic,readonly) long long alignmentShift; 
@property (assign,nonatomic) unsigned long long firstColumnIndex; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL spansStack; 
@property (nonatomic,readonly) double followingSpace; 
@required
-(unsigned long long)columnCount;
-(long long)alignmentShift;
-(void)setFirstColumnIndex:(unsigned long long)arg1;
-(unsigned long long)firstColumnIndex;
-(void)populateMaxColumnWidths:(_wrap_iter<double *>*)arg1;
-(double)followingSpace;
-(BOOL)spansStack;
-(id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(_wrap_iter<double *>*)arg2 iterMax:(_wrap_iter<double *>*)arg3 previousRow:(id)arg4 layoutManager:(const EQKitLayoutManager*)arg5;

@end

