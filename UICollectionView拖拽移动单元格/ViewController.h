//
//  ViewController.h
//  UICollectionView拖拽移动单元格
//
//  Created by 思久科技 on 16/5/10.
//  Copyright © 2016年 Seejoys. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDelegate, UICollectionViewDataSource>{
    
    NSMutableArray *_dataSource;    //声明数据源数组
}
@property (nonatomic, strong) UICollectionView *collectionView; //单元格视图


@end

