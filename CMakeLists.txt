cmake_minimum_required (VERSION 3.5)
project (DesignPatterns)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_executable(AbstractFactoryTest test/creational/abstract_factory_test.cc)
add_test(NAME AbstractFactoryTest COMMAND AbstractFactoryTest)

add_executable(BuilderTest test/creational/builder_test.cc)
add_test(NAME BuilderTest COMMAND BuilderTest)

add_executable(SingletonTest test/creational/singleton_test.cc)
add_test(NAME SingletonTest COMMAND SingletonTest)

add_executable(PrototypeTest test/creational/prototype_test.cc)
add_test(NAME PrototypeTest COMMAND PrototypeTest)

add_executable(FactoryTest test/creational/factory_test.cc)
add_test(NAME FactoryTest COMMAND FactoryTest)

add_executable(AdapterTest test/structural/adapter_test.cc)
add_test(NAME AdapterTest COMMAND AdapterTest)

add_executable(BridgeTest test/structural/bridge_test.cc)
add_test(NAME BridgeTest COMMAND BridgeTest)

add_executable(CompositeTest test/structural/composite_test.cc)
add_test(NAME CompositeTest COMMAND CompositeTest)

add_executable(DecoratorTest test/structural/decorator_test.cc)
add_test(NAME DecoratorTest COMMAND DecoratorTest)

add_executable(FacadeTest test/structural/facade_test.cc)
add_test(NAME FacadeTest COMMAND FacadeTest)

add_executable(FlyweightTest test/structural/flyweight_test.cc)
add_test(NAME FlyweightTest COMMAND FlyweightTest)

add_executable(ProxyTest test/structural/proxy_test.cc)
add_test(NAME ProxyTest COMMAND ProxyTest)

add_executable(ChainOfResponsibilityTest test/behavioral/chain_of_responsibility_test.cc)
add_test(NAME ChainOfResponsibilityTest COMMAND ChainOfResponsibilityTest)

add_executable(CommandTest test/behavioral/command_test.cc)
add_test(NAME CommandTest COMMAND CommandTest)

add_executable(InterpreterTest test/behavioral/interpreter_test.cc)
add_test(NAME InterpreterTest COMMAND InterpreterTest)

add_executable(IteratorTest test/behavioral/iterator_test.cc)
add_test(NAME IteratorTest COMMAND IteratorTest)

add_executable(MediatorTest test/behavioral/mediator_test.cc)
add_test(NAME MediatorTest COMMAND MediatorTest)

add_executable(MomentoTest test/behavioral/momento_test.cc)
add_test(NAME MomentoTest COMMAND MomentoTest)

add_executable(ObserverTest test/behavioral/observer_test.cc)
add_test(NAME ObserverTest COMMAND ObserverTest)

add_executable(StateTest test/behavioral/state_test.cc)
add_test(NAME StateTest COMMAND StateTest)

add_executable(StrategyTest test/behavioral/strategy_test.cc)
add_test(NAME StrategyTest COMMAND StrategyTest)

add_executable(TemplateMethodTest test/behavioral/template_method_test.cc)
add_test(NAME TemplateMethodTest COMMAND TemplateMethodTest)

add_executable(VisitorTest test/behavioral/visitor_test.cc)
add_test(NAME VisitorTest COMMAND VisitorTest)
