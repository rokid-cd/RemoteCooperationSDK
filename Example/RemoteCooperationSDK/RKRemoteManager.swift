//
//  RKRemoteManager.swift
//  RemoteCooperationSDK
//
//  Created by 刘爽 on 01/29/2023.
//

import UIKit
import RemoteCooperationSDK

class RKRemoteManager: NSObject {

    static var shared = RKRemoteManager()
    private var isLogin: Bool = false
    
    var contactMap: [String: UserInfo] = [:]
    
    var contactList: [UserInfo] = []
    
    public var uploadfolderName:String = ""
    
    //初始化SDK
    public func initRokidRTCSDK(appId: String, rtcUrl: String , saasUrl: String){
        
        RKCooperationManager.shared.initWithConfig(appId: appId, rtcUrl: rtcUrl, saasUrl: saasUrl) { data in
           
        } failure: { error in
           
        }
        
        RKCooperationManager.shared.delegate = self
        RKCooperationManager.shared.addEventListener(listener: self)
    }

    //登录
    public func loginRokidRTCSDK(token: String,
                                 userInfo: UserInfo,
                                 successBlock: @escaping (_ data:Any?) -> Void,
                                 failBlock: @escaping (_ errMsg: String) -> Void) {
        
        RKCooperationManager.shared.login(token: token, user: userInfo) { data in
            self.isLogin = true
            successBlock(data)
        } failure: { error in
            failBlock(error?.localizedDescription ?? "远程协助登录失败")
        }
    }
    
    //退出注释SDK
    public func loginOut(){
        if isLogin {
            RKCooperationManager.shared.logout()
        }
    }
 
    /// 创建会议
    public func startCooperation(inviteUsers: [String],
                                 successBlock: @escaping (_ data:Any?) -> Void,
                                 failBlock: @escaping (_ errMsg: String) -> Void) {
        
        RKCooperationManager.shared.startCooperation(inviteUsers: inviteUsers) { data in
            successBlock(data)
        } failure: { error in
            failBlock(error?.localizedDescription ?? "")
        }
    }
    
    
    /// 邀请成员加入会议
    public func inviteUsers(channelId:String,
                            inviteUsers: [String],
                            successBlock: @escaping (_ data:Any?) -> Void,
                            failBlock: @escaping (_ errMsg: String) -> Void) {
        
        RKCooperationManager.shared.inviteCooperation(channelId: channelId, userIdList: inviteUsers) { data in
            successBlock(data)
        } failure: { error in
            failBlock(error?.localizedDescription ?? "")
        }
    }
    
    /// 取消邀请
    public func inviteCancel() {
        RKCooperationManager.shared.showRKWindow()
    }
    
    // 设置文件夹
    public func setUploadfolderName(path: String) {
        RKCooperationManager.shared.setUploadFolderPath(path: path)
    }
    
    // 设置忽略IP
    public func setEvaluatorHosts(host:String){
        RKCooperationManager.shared.setEvaluatorHosts(host: host)
    }
    
}

extension RKRemoteManager: RKRTCDelegate {

    func getContactList() -> [UserInfo] {
                
        return contactList
      
    }
    
    func getContact(byId: String) -> UserInfo? {
        return contactMap[byId]
    }
    
    func previewFile(paths: [String], index: Int, type: RKMeetingFileType) {
        
    }
    
    func showToast(withText: String, inView: UIView?) {
       
    }
    
    func showToast(withText: String, inView: UIView?, completion: ((Bool) -> Void)?) {
        
    }
    
    func showLoading(inView: UIView?) {
        
    }
    
    func hideLoading(inView: UIView?) {
        
    }
}

extension RKRemoteManager: RKRTCEventListener {
    
    func onLogout(reaseon: Int) {
        //服务端强制登出 7
        //账号已在其他设备登录 8
        print("onLogout reason:\(reaseon)")
    }
    
    func onInvite(channelId: String, userIdList: [String], MaxJoin: Int) {
        
    }
    
    func rejoinAction() {
        
    }
    
    func startCooperationAction() {
        
    }
    
    func leaveMeetingAction() {
        
    }
}





