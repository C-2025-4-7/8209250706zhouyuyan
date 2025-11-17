from flask import Flask,request,make_response,render_template
app=Flask(__name__)
@app.route('/')
def hello_world():#routing路由是url到python函数的映射当用户访问url时flask调用响应函数处理请求
    return 'hello,world!'
@app.route('/about')
def about():
    return 'this is page'#上面的是路由
@app.route('/greet/<name>')#视图函数
def greet(name):
    return f'hello,{name}'#f是自动填充name变量
@app.route('/submit', methods=['POST'])#请求头
def submit():#请求对象
    username=request.form.get('username')#获取表单数据的username字段
    return f'hello,{username}'
@app.route('custom_response')#响应对象
def custom_response():
    response=make_response('this is a response')
    response.headers['X-Custom-Header']='value'
@app.route('/hello/<name>')#模版
def hello(name):
    return render_template('hello.html',name=name)
if __name__=='__main__':
    app.run(debug=True)