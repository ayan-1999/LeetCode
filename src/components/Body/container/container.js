import Myheading from "./heading/heading";
import MyForm from "./form/form";
import MyPrintMessage from "./printMessage/printMessage";
import "./container.css";

const Container = () => {
  return (
    <div className="container">
      <Myheading></Myheading>
      <MyForm></MyForm>
    </div>
  );
};
export default Container;
